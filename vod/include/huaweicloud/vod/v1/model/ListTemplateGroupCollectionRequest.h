
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListTemplateGroupCollectionRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListTemplateGroupCollectionRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ListTemplateGroupCollectionRequest
    : public ModelBase
{
public:
    ListTemplateGroupCollectionRequest();
    virtual ~ListTemplateGroupCollectionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTemplateGroupCollectionRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。 
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 模板组集合id 
    /// </summary>

    std::string getGroupCollectionId() const;
    bool groupCollectionIdIsSet() const;
    void unsetgroupCollectionId();
    void setGroupCollectionId(const std::string& value);

    /// <summary>
    /// 偏移量。默认为0。指定group_collection_id时该参数无效。&lt;br/&gt; 
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页记录数。默认为10，范围[1,100]。指定group_collection_id时该参数无效。&lt;br/&gt; 
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string groupCollectionId_;
    bool groupCollectionIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTemplateGroupCollectionRequest& dereference_from_shared_ptr(std::shared_ptr<ListTemplateGroupCollectionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListTemplateGroupCollectionRequest_H_
