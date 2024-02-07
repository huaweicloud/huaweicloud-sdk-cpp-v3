
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_CdnIps_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_CdnIps_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  CdnIps
    : public ModelBase
{
public:
    CdnIps();
    virtual ~CdnIps();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CdnIps members

    /// <summary>
    /// 需查询的IP地址。
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 是否是华为云CDN节点。（true:是华为云CDN节点，false:不是华为云CDN节点）
    /// </summary>

    bool isBelongs() const;
    bool belongsIsSet() const;
    void unsetbelongs();
    void setBelongs(bool value);

    /// <summary>
    /// IP归属地省份。（Unknown:表示未知归属地）
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 运营商名称。如果IP归属地未知，该字段返回null。
    /// </summary>

    std::string getIsp() const;
    bool ispIsSet() const;
    void unsetisp();
    void setIsp(const std::string& value);

    /// <summary>
    /// 平台。如果IP归属地未知，该字段返回null。
    /// </summary>

    std::string getPlatform() const;
    bool platformIsSet() const;
    void unsetplatform();
    void setPlatform(const std::string& value);


protected:
    std::string ip_;
    bool ipIsSet_;
    bool belongs_;
    bool belongsIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string isp_;
    bool ispIsSet_;
    std::string platform_;
    bool platformIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_CdnIps_H_
