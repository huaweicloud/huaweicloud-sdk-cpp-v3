
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_WafGeoIpRule_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_WafGeoIpRule_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  WafGeoIpRule
    : public ModelBase
{
public:
    WafGeoIpRule();
    virtual ~WafGeoIpRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WafGeoIpRule members

    /// <summary>
    /// 地理位置
    /// </summary>

    std::string getGeoip() const;
    bool geoipIsSet() const;
    void unsetgeoip();
    void setGeoip(const std::string& value);

    /// <summary>
    /// id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 规则名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 防护区域，0-大陆，1-海外
    /// </summary>

    int32_t getOverseasType() const;
    bool overseasTypeIsSet() const;
    void unsetoverseasType();
    void setOverseasType(int32_t value);

    /// <summary>
    /// 添加时间
    /// </summary>

    int32_t getTimestamp() const;
    bool timestampIsSet() const;
    void unsettimestamp();
    void setTimestamp(int32_t value);

    /// <summary>
    /// 防护动作 0-阻断，1-放行，2-仅记录
    /// </summary>

    int32_t getWhite() const;
    bool whiteIsSet() const;
    void unsetwhite();
    void setWhite(int32_t value);


protected:
    std::string geoip_;
    bool geoipIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t overseasType_;
    bool overseasTypeIsSet_;
    int32_t timestamp_;
    bool timestampIsSet_;
    int32_t white_;
    bool whiteIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_WafGeoIpRule_H_
