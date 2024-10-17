
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListResourceInstanceByTagRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListResourceInstanceByTagRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/ResourceInstanceTagRequest.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListResourceInstanceByTagRequest
    : public ModelBase
{
public:
    ListResourceInstanceByTagRequest();
    virtual ~ListResourceInstanceByTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListResourceInstanceByTagRequest members

    /// <summary>
    /// 资源类型。 - auditInstance
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 查询记录数（action为count时无此参数）如果action为filter默认为1000，limit最多为1000,不能为负数，最小值为1。
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量（action为count时无此参数）从第一条数据偏移offset条数据后开始查询，如果action为filter默认为0（偏移0条数据，表示从第一条数据开始查询）,必须为数字，不能为负数。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceInstanceTagRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ResourceInstanceTagRequest& value);


protected:
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    ResourceInstanceTagRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListResourceInstanceByTagRequest& dereference_from_shared_ptr(std::shared_ptr<ListResourceInstanceByTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListResourceInstanceByTagRequest_H_
