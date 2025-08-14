
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ResponseConfigDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ResponseConfigDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <huaweicloud/identitycenter/v1/model/ResponseSourceDetailsDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 联邦配置
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ResponseConfigDto
    : public ModelBase
{
public:
    ResponseConfigDto();
    virtual ~ResponseConfigDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResponseConfigDto members

    /// <summary>
    /// 额外添加的属性映射配置
    /// </summary>

    std::map<std::string, ResponseSourceDetailsDto>& getProperties();
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const std::map<std::string, ResponseSourceDetailsDto>& value);

    /// <summary>
    /// 
    /// </summary>

    ResponseSourceDetailsDto getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const ResponseSourceDetailsDto& value);

    /// <summary>
    /// 中继状态
    /// </summary>

    std::string getRelayState() const;
    bool relayStateIsSet() const;
    void unsetrelayState();
    void setRelayState(const std::string& value);

    /// <summary>
    /// 会话过期时间
    /// </summary>

    std::string getTtl() const;
    bool ttlIsSet() const;
    void unsetttl();
    void setTtl(const std::string& value);


protected:
    std::map<std::string, ResponseSourceDetailsDto> properties_;
    bool propertiesIsSet_;
    ResponseSourceDetailsDto subject_;
    bool subjectIsSet_;
    std::string relayState_;
    bool relayStateIsSet_;
    std::string ttl_;
    bool ttlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ResponseConfigDto_H_
