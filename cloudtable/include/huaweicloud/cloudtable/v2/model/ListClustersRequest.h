
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ListClustersRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ListClustersRequest_H_

#include <huaweicloud/cloudtable/v2/CloudtableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  ListClustersRequest
    : public ModelBase
{
public:
    ListClustersRequest();
    virtual ~ListClustersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListClustersRequest members

    /// <summary>
    /// 分页参数，列表的偏移量，默认值为0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 分页参数，列表当前分页的数量限制，默认为10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListClustersRequest& dereference_from_shared_ptr(std::shared_ptr<ListClustersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ListClustersRequest_H_
