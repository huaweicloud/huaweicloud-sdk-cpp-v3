
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionTagsResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionTagsResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/functiongraph/v2/model/KvItem.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListFunctionTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFunctionTagsResponse();
    virtual ~ListFunctionTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFunctionTagsResponse members

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<KvItem>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<KvItem>& value);

    /// <summary>
    /// 系统标签列表
    /// </summary>

    std::vector<KvItem>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<KvItem>& value);


protected:
    std::vector<KvItem> tags_;
    bool tagsIsSet_;
    std::vector<KvItem> sysTags_;
    bool sysTagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionTagsResponse_H_
