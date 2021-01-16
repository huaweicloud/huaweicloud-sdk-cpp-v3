
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipsByTagsResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipsByTagsResponse_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/ListResourceResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  ListPublicipsByTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPublicipsByTagsResponse();
    virtual ~ListPublicipsByTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListPublicipsByTagsResponse members

    /// <summary>
    /// resource对象列表
    /// </summary>

    std::vector<ListResourceResp>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<ListResourceResp>& value);

    /// <summary>
    /// 总记录数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ListResourceResp> resources_;
    bool resourcesIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipsByTagsResponse_H_
