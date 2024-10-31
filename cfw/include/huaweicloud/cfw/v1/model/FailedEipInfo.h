
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_FailedEipInfo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_FailedEipInfo_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  FailedEipInfo
    : public ModelBase
{
public:
    FailedEipInfo();
    virtual ~FailedEipInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FailedEipInfo members

    /// <summary>
    /// 修改状态失败的eipId。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 修改状态失败的错误码。
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_FailedEipInfo_H_
