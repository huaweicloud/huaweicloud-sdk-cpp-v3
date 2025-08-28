
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ListTagsRequest_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ListTagsRequest_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  ListTagsRequest
    : public ModelBase
{
public:
    ListTagsRequest();
    virtual ~ListTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTagsRequest members

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getResourceTypes() const;
    bool resourceTypesIsSet() const;
    void unsetresourceTypes();
    void setResourceTypes(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 标签类型
    /// </summary>

    std::string getTagTypes() const;
    bool tagTypesIsSet() const;
    void unsettagTypes();
    void setTagTypes(const std::string& value);


protected:
    std::string resourceTypes_;
    bool resourceTypesIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string tagTypes_;
    bool tagTypesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ListTagsRequest_H_
