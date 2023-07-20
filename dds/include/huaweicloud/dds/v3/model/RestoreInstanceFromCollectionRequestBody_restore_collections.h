
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreInstanceFromCollectionRequestBody_restore_collections_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreInstanceFromCollectionRequestBody_restore_collections_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/RestoreInstanceFromCollectionRequestBody_collections.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  RestoreInstanceFromCollectionRequestBody_restore_collections
    : public ModelBase
{
public:
    RestoreInstanceFromCollectionRequestBody_restore_collections();
    virtual ~RestoreInstanceFromCollectionRequestBody_restore_collections();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RestoreInstanceFromCollectionRequestBody_restore_collections members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// 数据库恢复时间点。如果是数据库级恢复，该参数必传，UNIX时间戳格式，单位是毫秒，时区是UTC。
    /// </summary>

    std::string getRestoreDatabaseTime() const;
    bool restoreDatabaseTimeIsSet() const;
    void unsetrestoreDatabaseTime();
    void setRestoreDatabaseTime(const std::string& value);

    /// <summary>
    /// 集合信息。
    /// </summary>

    std::vector<RestoreInstanceFromCollectionRequestBody_collections>& getCollections();
    bool collectionsIsSet() const;
    void unsetcollections();
    void setCollections(const std::vector<RestoreInstanceFromCollectionRequestBody_collections>& value);


protected:
    std::string database_;
    bool databaseIsSet_;
    std::string restoreDatabaseTime_;
    bool restoreDatabaseTimeIsSet_;
    std::vector<RestoreInstanceFromCollectionRequestBody_collections> collections_;
    bool collectionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreInstanceFromCollectionRequestBody_restore_collections_H_
