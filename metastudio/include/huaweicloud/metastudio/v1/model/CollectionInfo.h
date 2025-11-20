
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CollectionInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CollectionInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 收藏项
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CollectionInfo
    : public ModelBase
{
public:
    CollectionInfo();
    virtual ~CollectionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CollectionInfo members

    /// <summary>
    /// 收藏项类型。 * VOICE：音色
    /// </summary>

    std::string getCollectionType() const;
    bool collectionTypeIsSet() const;
    void unsetcollectionType();
    void setCollectionType(const std::string& value);

    /// <summary>
    /// 收藏的资产或者模板ID。
    /// </summary>

    std::vector<std::string>& getCollectionIds();
    bool collectionIdsIsSet() const;
    void unsetcollectionIds();
    void setCollectionIds(const std::vector<std::string>& value);


protected:
    std::string collectionType_;
    bool collectionTypeIsSet_;
    std::vector<std::string> collectionIds_;
    bool collectionIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CollectionInfo_H_
