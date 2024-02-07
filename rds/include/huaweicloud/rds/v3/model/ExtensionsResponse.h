
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ExtensionsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ExtensionsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ExtensionsResponse
    : public ModelBase
{
public:
    ExtensionsResponse();
    virtual ~ExtensionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtensionsResponse members

    /// <summary>
    /// 插件名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// 插件版本。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 可更新插件版本
    /// </summary>

    std::string getVersionUpdate() const;
    bool versionUpdateIsSet() const;
    void unsetversionUpdate();
    void setVersionUpdate(const std::string& value);

    /// <summary>
    /// 依赖预加载库。
    /// </summary>

    std::string getSharedPreloadLibraries() const;
    bool sharedPreloadLibrariesIsSet() const;
    void unsetsharedPreloadLibraries();
    void setSharedPreloadLibraries(const std::string& value);

    /// <summary>
    /// 是否创建。
    /// </summary>

    bool isCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(bool value);

    /// <summary>
    /// 插件描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string versionUpdate_;
    bool versionUpdateIsSet_;
    std::string sharedPreloadLibraries_;
    bool sharedPreloadLibrariesIsSet_;
    bool created_;
    bool createdIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ExtensionsResponse_H_
