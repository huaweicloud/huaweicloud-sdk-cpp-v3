
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListHtapFlavorRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListHtapFlavorRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListHtapFlavorRequest
    : public ModelBase
{
public:
    ListHtapFlavorRequest();
    virtual ~ListHtapFlavorRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHtapFlavorRequest members

    /// <summary>
    /// HTAP引擎名。 取值范围： - star-rocks - click-house
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// 可用区模式，当前仅支持single。
    /// </summary>

    std::string getAvailabilityZoneMode() const;
    bool availabilityZoneModeIsSet() const;
    void unsetavailabilityZoneMode();
    void setAvailabilityZoneMode(const std::string& value);

    /// <summary>
    /// 规格码，提供后仅查询指定规格码规格信息。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// 请求语言类型。默认en-us。 取值范围： - en-us - zh-cn
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 数据库版本号，不填默认3.1.6.0。
    /// </summary>

    std::string getVersionName() const;
    bool versionNameIsSet() const;
    void unsetversionName();
    void setVersionName(const std::string& value);


protected:
    std::string engineName_;
    bool engineNameIsSet_;
    std::string availabilityZoneMode_;
    bool availabilityZoneModeIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string versionName_;
    bool versionNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListHtapFlavorRequest& dereference_from_shared_ptr(std::shared_ptr<ListHtapFlavorRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListHtapFlavorRequest_H_
