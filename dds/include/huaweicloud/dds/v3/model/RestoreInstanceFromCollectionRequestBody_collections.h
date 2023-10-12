
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreInstanceFromCollectionRequestBody_collections_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreInstanceFromCollectionRequestBody_collections_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_DDS_V3_EXPORT  RestoreInstanceFromCollectionRequestBody_collections
    : public ModelBase
{
public:
    RestoreInstanceFromCollectionRequestBody_collections();
    virtual ~RestoreInstanceFromCollectionRequestBody_collections();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestoreInstanceFromCollectionRequestBody_collections members

    /// <summary>
    /// 恢复前表名。
    /// </summary>

    std::string getOldName() const;
    bool oldNameIsSet() const;
    void unsetoldName();
    void setOldName(const std::string& value);

    /// <summary>
    /// 恢复后表名。
    /// </summary>

    std::string getNewName() const;
    bool newNameIsSet() const;
    void unsetnewName();
    void setNewName(const std::string& value);

    /// <summary>
    /// 数据库集合恢复时间点。UNIX时间戳格式，单位是毫秒，时区是UTC。
    /// </summary>

    std::string getRestoreCollectionTime() const;
    bool restoreCollectionTimeIsSet() const;
    void unsetrestoreCollectionTime();
    void setRestoreCollectionTime(const std::string& value);


protected:
    std::string oldName_;
    bool oldNameIsSet_;
    std::string newName_;
    bool newNameIsSet_;
    std::string restoreCollectionTime_;
    bool restoreCollectionTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreInstanceFromCollectionRequestBody_collections_H_
