
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreInstanceFromCollectionRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreInstanceFromCollectionRequestBody_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/RestoreInstanceFromCollectionRequestBody_restore_collections.h>
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
class HUAWEICLOUD_DDS_V3_EXPORT  RestoreInstanceFromCollectionRequestBody
    : public ModelBase
{
public:
    RestoreInstanceFromCollectionRequestBody();
    virtual ~RestoreInstanceFromCollectionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RestoreInstanceFromCollectionRequestBody members

    /// <summary>
    /// 数据库信息。
    /// </summary>

    std::vector<RestoreInstanceFromCollectionRequestBody_restore_collections>& getRestoreCollections();
    bool restoreCollectionsIsSet() const;
    void unsetrestoreCollections();
    void setRestoreCollections(const std::vector<RestoreInstanceFromCollectionRequestBody_restore_collections>& value);


protected:
    std::vector<RestoreInstanceFromCollectionRequestBody_restore_collections> restoreCollections_;
    bool restoreCollectionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreInstanceFromCollectionRequestBody_H_
