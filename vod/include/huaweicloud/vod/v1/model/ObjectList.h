
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ObjectList_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ObjectList_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vod/v1/model/ObjectMetaData.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ObjectList
    : public ModelBase
{
public:
    ObjectList();
    virtual ~ObjectList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObjectList members

    /// <summary>
    /// 对象文件名 
    /// </summary>

    std::string getObject() const;
    bool objectIsSet() const;
    void unsetobject();
    void setObject(const std::string& value);

    /// <summary>
    /// 媒资ID 
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ObjectMetaData getMetaData() const;
    bool metaDataIsSet() const;
    void unsetmetaData();
    void setMetaData(const ObjectMetaData& value);


protected:
    std::string object_;
    bool objectIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    ObjectMetaData metaData_;
    bool metaDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ObjectList_H_
