
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListEnterpriseResourceResult_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListEnterpriseResourceResult_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/ListEnterpriseResourceDetail.h>
#include <string>
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
/// 
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListEnterpriseResourceResult
    : public ModelBase
{
public:
    ListEnterpriseResourceResult();
    virtual ~ListEnterpriseResourceResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEnterpriseResourceResult members

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListEnterpriseResourceDetail getResourceDetail() const;
    bool resourceDetailIsSet() const;
    void unsetresourceDetail();
    void setResourceDetail(const ListEnterpriseResourceDetail& value);

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

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    ListEnterpriseResourceDetail resourceDetail_;
    bool resourceDetailIsSet_;
    std::vector<KvItem> tags_;
    bool tagsIsSet_;
    std::vector<KvItem> sysTags_;
    bool sysTagsIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListEnterpriseResourceResult_H_
