
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateTemplateGroupCollectionResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateTemplateGroupCollectionResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_VOD_V1_EXPORT  CreateTemplateGroupCollectionResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateTemplateGroupCollectionResponse();
    virtual ~CreateTemplateGroupCollectionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTemplateGroupCollectionResponse members

    /// <summary>
    /// 模板组集合ID&lt;br/&gt; 
    /// </summary>

    std::string getGroupCollectionId() const;
    bool groupCollectionIdIsSet() const;
    void unsetgroupCollectionId();
    void setGroupCollectionId(const std::string& value);


protected:
    std::string groupCollectionId_;
    bool groupCollectionIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateTemplateGroupCollectionResponse_H_
