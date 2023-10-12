
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_GetHostGroupListTag_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_GetHostGroupListTag_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/HostGroupTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 主机组标签信息
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  GetHostGroupListTag
    : public ModelBase
{
public:
    GetHostGroupListTag();
    virtual ~GetHostGroupListTag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetHostGroupListTag members

    /// <summary>
    /// 标签类型。AND：标签过滤的逻辑为与，OR：标签过滤的逻辑为或
    /// </summary>

    std::string getTagType() const;
    bool tagTypeIsSet() const;
    void unsettagType();
    void setTagType(const std::string& value);

    /// <summary>
    /// 主机组标签
    /// </summary>

    std::vector<HostGroupTag>& getTagList();
    bool tagListIsSet() const;
    void unsettagList();
    void setTagList(const std::vector<HostGroupTag>& value);


protected:
    std::string tagType_;
    bool tagTypeIsSet_;
    std::vector<HostGroupTag> tagList_;
    bool tagListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_GetHostGroupListTag_H_
