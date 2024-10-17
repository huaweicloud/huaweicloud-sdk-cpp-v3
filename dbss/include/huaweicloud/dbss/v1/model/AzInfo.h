
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AzInfo_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AzInfo_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  AzInfo
    : public ModelBase
{
public:
    AzInfo();
    virtual ~AzInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AzInfo members

    /// <summary>
    /// 可用区名称
    /// </summary>

    std::string getZoneName() const;
    bool zoneNameIsSet() const;
    void unsetzoneName();
    void setZoneName(const std::string& value);

    /// <summary>
    /// 可用区编号
    /// </summary>

    int32_t getZoneNumber() const;
    bool zoneNumberIsSet() const;
    void unsetzoneNumber();
    void setZoneNumber(int32_t value);

    /// <summary>
    /// 可用区类型
    /// </summary>

    std::string getAzType() const;
    bool azTypeIsSet() const;
    void unsetazType();
    void setAzType(const std::string& value);

    /// <summary>
    /// 可用区中文别名
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);

    /// <summary>
    /// 可用区英文别名
    /// </summary>

    std::string getAliasUs() const;
    bool aliasUsIsSet() const;
    void unsetaliasUs();
    void setAliasUs(const std::string& value);


protected:
    std::string zoneName_;
    bool zoneNameIsSet_;
    int32_t zoneNumber_;
    bool zoneNumberIsSet_;
    std::string azType_;
    bool azTypeIsSet_;
    std::string alias_;
    bool aliasIsSet_;
    std::string aliasUs_;
    bool aliasUsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AzInfo_H_
