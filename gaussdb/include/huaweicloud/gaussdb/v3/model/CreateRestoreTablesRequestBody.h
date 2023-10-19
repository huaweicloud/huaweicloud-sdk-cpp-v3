
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateRestoreTablesRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateRestoreTablesRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/CreateRestoreDatabaseTableInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateRestoreTablesRequestBody
    : public ModelBase
{
public:
    CreateRestoreTablesRequestBody();
    virtual ~CreateRestoreTablesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRestoreTablesRequestBody members

    /// <summary>
    /// 备份时间点，时间戳格式。
    /// </summary>

    std::string getRestoreTime() const;
    bool restoreTimeIsSet() const;
    void unsetrestoreTime();
    void setRestoreTime(const std::string& value);

    /// <summary>
    /// 是否是最新库表。默认为false。 - true：是最新库表。 - false：是恢复时间点库表。
    /// </summary>

    std::string getLastTableInfo() const;
    bool lastTableInfoIsSet() const;
    void unsetlastTableInfo();
    void setLastTableInfo(const std::string& value);

    /// <summary>
    /// 数据库信息。
    /// </summary>

    std::vector<CreateRestoreDatabaseTableInfo>& getRestoreTables();
    bool restoreTablesIsSet() const;
    void unsetrestoreTables();
    void setRestoreTables(const std::vector<CreateRestoreDatabaseTableInfo>& value);


protected:
    std::string restoreTime_;
    bool restoreTimeIsSet_;
    std::string lastTableInfo_;
    bool lastTableInfoIsSet_;
    std::vector<CreateRestoreDatabaseTableInfo> restoreTables_;
    bool restoreTablesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateRestoreTablesRequestBody_H_
