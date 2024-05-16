
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListHtapStorageTypeRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListHtapStorageTypeRequest_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListHtapStorageTypeRequest
    : public ModelBase
{
public:
    ListHtapStorageTypeRequest();
    virtual ~ListHtapStorageTypeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHtapStorageTypeRequest members

    /// <summary>
    /// HTAP数据库名。 取值范围： - star-rocks - click-house
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// 数据库大版本号
    /// </summary>

    std::string getVersionName() const;
    bool versionNameIsSet() const;
    void unsetversionName();
    void setVersionName(const std::string& value);

    /// <summary>
    /// 请求语言类型。默认en-us。 取值范围： - en-us - zh-cn
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);


protected:
    std::string database_;
    bool databaseIsSet_;
    std::string versionName_;
    bool versionNameIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListHtapStorageTypeRequest& dereference_from_shared_ptr(std::shared_ptr<ListHtapStorageTypeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListHtapStorageTypeRequest_H_
