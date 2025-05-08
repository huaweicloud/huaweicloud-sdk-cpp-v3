
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowObjectMetaDataResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowObjectMetaDataResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ObjectList.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ShowObjectMetaDataResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowObjectMetaDataResponse();
    virtual ~ShowObjectMetaDataResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowObjectMetaDataResponse members

    /// <summary>
    /// 桶名 
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// 下次列举对象请求的起始位置。 
    /// </summary>

    std::string getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(const std::string& value);

    /// <summary>
    /// 媒体元数据列表 
    /// </summary>

    std::vector<ObjectList>& getObjectList();
    bool objectListIsSet() const;
    void unsetobjectList();
    void setObjectList(const std::vector<ObjectList>& value);


protected:
    std::string bucket_;
    bool bucketIsSet_;
    std::string nextMarker_;
    bool nextMarkerIsSet_;
    std::vector<ObjectList> objectList_;
    bool objectListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowObjectMetaDataResponse_H_
