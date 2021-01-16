
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_OsVersionInfo_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_OsVersionInfo_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 操作系统详情
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  OsVersionInfo
    : public ModelBase
{
public:
    OsVersionInfo();
    virtual ~OsVersionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OsVersionInfo members

    /// <summary>
    /// 操作系统的平台值
    /// </summary>

    std::string getPlatform() const;
    bool platformIsSet() const;
    void unsetplatform();
    void setPlatform(const std::string& value);

    /// <summary>
    /// os_version的key值，和os_version值相同
    /// </summary>

    std::string getOsVersionKey() const;
    bool osVersionKeyIsSet() const;
    void unsetosVersionKey();
    void setOsVersionKey(const std::string& value);

    /// <summary>
    /// 操作系统的版本
    /// </summary>

    std::string getOsVersion() const;
    bool osVersionIsSet() const;
    void unsetosVersion();
    void setOsVersion(const std::string& value);

    /// <summary>
    /// 操作系统的位数
    /// </summary>

    std::string getOsBit() const;
    bool osBitIsSet() const;
    void unsetosBit();
    void setOsBit(const std::string& value);

    /// <summary>
    /// 操作系统的类型，Linux或Windows
    /// </summary>

    std::string getOsType() const;
    bool osTypeIsSet() const;
    void unsetosType();
    void setOsType(const std::string& value);


protected:
    std::string platform_;
    bool platformIsSet_;
    std::string osVersionKey_;
    bool osVersionKeyIsSet_;
    std::string osVersion_;
    bool osVersionIsSet_;
    std::string osBit_;
    bool osBitIsSet_;
    std::string osType_;
    bool osTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_OsVersionInfo_H_
