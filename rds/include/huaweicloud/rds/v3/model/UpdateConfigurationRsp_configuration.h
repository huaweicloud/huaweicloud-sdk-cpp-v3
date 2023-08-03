
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateConfigurationRsp_configuration_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateConfigurationRsp_configuration_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 参数模板信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  UpdateConfigurationRsp_configuration
    : public ModelBase
{
public:
    UpdateConfigurationRsp_configuration();
    virtual ~UpdateConfigurationRsp_configuration();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateConfigurationRsp_configuration members

    /// <summary>
    /// 参数模板ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 参数模板名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 请求参数“values”中被忽略掉，没有生效的参数名称列表。 当参数不存在时，参数修改不会下发，并通过此参数返回所有被忽略的参数名称。
    /// </summary>

    std::vector<std::string>& getIgnoredParams();
    bool ignoredParamsIsSet() const;
    void unsetignoredParams();
    void setIgnoredParams(const std::vector<std::string>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> ignoredParams_;
    bool ignoredParamsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateConfigurationRsp_configuration_H_
