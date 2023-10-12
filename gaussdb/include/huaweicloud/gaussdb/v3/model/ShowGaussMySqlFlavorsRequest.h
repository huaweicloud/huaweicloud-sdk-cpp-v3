
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlFlavorsRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlFlavorsRequest_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowGaussMySqlFlavorsRequest
    : public ModelBase
{
public:
    ShowGaussMySqlFlavorsRequest();
    virtual ~ShowGaussMySqlFlavorsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGaussMySqlFlavorsRequest members

    /// <summary>
    /// 语言。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 数据库引擎名称。
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// 数据库版本号，目前仅支持兼容MySQL 8.0。
    /// </summary>

    std::string getVersionName() const;
    bool versionNameIsSet() const;
    void unsetversionName();
    void setVersionName(const std::string& value);

    /// <summary>
    /// 规格的可用区模式，现在仅支持\&quot;single\&quot;、\&quot;multi\&quot;，不区分大小写。
    /// </summary>

    std::string getAvailabilityZoneMode() const;
    bool availabilityZoneModeIsSet() const;
    void unsetavailabilityZoneMode();
    void setAvailabilityZoneMode(const std::string& value);

    /// <summary>
    /// 规格编码。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string versionName_;
    bool versionNameIsSet_;
    std::string availabilityZoneMode_;
    bool availabilityZoneModeIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowGaussMySqlFlavorsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowGaussMySqlFlavorsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlFlavorsRequest_H_
