
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceIdName_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceIdName_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 服务id和name信息
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServiceIdName
    : public ModelBase
{
public:
    ServiceIdName();
    virtual ~ServiceIdName();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceIdName members

    /// <summary>
    /// **参数解释：** 服务ID。 **取值范围：** 服务ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务名。 **取值范围：** 支持1-128个字符，可以包含字母、汉字、数字、连字符和下划线。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceIdName_H_
