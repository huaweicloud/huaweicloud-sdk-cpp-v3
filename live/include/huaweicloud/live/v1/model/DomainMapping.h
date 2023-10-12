
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_DomainMapping_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_DomainMapping_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  DomainMapping
    : public ModelBase
{
public:
    DomainMapping();
    virtual ~DomainMapping();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DomainMapping members

    /// <summary>
    /// 直播播放域名
    /// </summary>

    std::string getPullDomain() const;
    bool pullDomainIsSet() const;
    void unsetpullDomain();
    void setPullDomain(const std::string& value);

    /// <summary>
    /// 直播播放域名关联的推流域名
    /// </summary>

    std::string getPushDomain() const;
    bool pushDomainIsSet() const;
    void unsetpushDomain();
    void setPushDomain(const std::string& value);


protected:
    std::string pullDomain_;
    bool pullDomainIsSet_;
    std::string pushDomain_;
    bool pushDomainIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_DomainMapping_H_
