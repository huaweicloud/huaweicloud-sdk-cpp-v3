
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SetAutoPolicyErrorResults_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SetAutoPolicyErrorResults_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  SetAutoPolicyErrorResults
    : public ModelBase
{
public:
    SetAutoPolicyErrorResults();
    virtual ~SetAutoPolicyErrorResults();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetAutoPolicyErrorResults members

    /// <summary>
    /// **参数解释：** 实例ID。 **取值范围：** 不涉及
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 错误信息。 **取值范围：** 不涉及
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SetAutoPolicyErrorResults_H_
