
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_ListResourceSharesByTagsRequest_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_ListResourceSharesByTagsRequest_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ram/v1/model/ResourceSharesByTagsReqBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  ListResourceSharesByTagsRequest
    : public ModelBase
{
public:
    ListResourceSharesByTagsRequest();
    virtual ~ListResourceSharesByTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListResourceSharesByTagsRequest members

    /// <summary>
    /// 分页页面的最大值。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页标记。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceSharesByTagsReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ResourceSharesByTagsReqBody& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    ResourceSharesByTagsReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListResourceSharesByTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListResourceSharesByTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_ListResourceSharesByTagsRequest_H_
