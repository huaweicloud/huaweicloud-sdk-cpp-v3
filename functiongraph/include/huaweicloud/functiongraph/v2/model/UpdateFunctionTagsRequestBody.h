
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateFunctionTagsRequestBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateFunctionTagsRequestBody_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  UpdateFunctionTagsRequestBody
    : public ModelBase
{
public:
    UpdateFunctionTagsRequestBody();
    virtual ~UpdateFunctionTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateFunctionTagsRequestBody members

    /// <summary>
    /// action名称
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

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
    std::string action_;
    bool actionIsSet_;
    std::vector<KvItem> tags_;
    bool tagsIsSet_;
    std::vector<KvItem> sysTags_;
    bool sysTagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateFunctionTagsRequestBody_H_
