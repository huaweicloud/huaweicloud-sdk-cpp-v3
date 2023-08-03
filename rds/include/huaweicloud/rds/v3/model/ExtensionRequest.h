
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ExtensionRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ExtensionRequest_H_

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
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ExtensionRequest
    : public ModelBase
{
public:
    ExtensionRequest();
    virtual ~ExtensionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ExtensionRequest members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// 插件名称。
    /// </summary>

    std::string getExtensionName() const;
    bool extensionNameIsSet() const;
    void unsetextensionName();
    void setExtensionName(const std::string& value);


protected:
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string extensionName_;
    bool extensionNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ExtensionRequest_H_
