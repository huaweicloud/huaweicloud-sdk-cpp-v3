
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListStorageTypesRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListStorageTypesRequest_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListStorageTypesRequest
    : public ModelBase
{
public:
    ListStorageTypesRequest();
    virtual ~ListStorageTypesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListStorageTypesRequest members

    /// <summary>
    /// 语言
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 数据库引擎。支持的引擎如下，不区分大小写： MySQL PostgreSQL SQLServer
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// 数据库版本号。
    /// </summary>

    std::string getVersionName() const;
    bool versionNameIsSet() const;
    void unsetversionName();
    void setVersionName(const std::string& value);

    /// <summary>
    /// 主备模式： single：单机模式。 ha：主备模式。 replica：只读模式。
    /// </summary>

    std::string getHaMode() const;
    bool haModeIsSet() const;
    void unsethaMode();
    void setHaMode(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string versionName_;
    bool versionNameIsSet_;
    std::string haMode_;
    bool haModeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListStorageTypesRequest& dereference_from_shared_ptr(std::shared_ptr<ListStorageTypesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListStorageTypesRequest_H_
