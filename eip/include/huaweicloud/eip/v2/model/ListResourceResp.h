
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ListResourceResp_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ListResourceResp_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/ResourceTagResp.h>
#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源实例详情
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  ListResourceResp
    : public ModelBase
{
public:
    ListResourceResp();
    virtual ~ListResourceResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListResourceResp members

    /// <summary>
    /// 资源详情。 资源对象，用于扩展。默认为空
    /// </summary>

    Object getResourceDetail() const;
    bool resourceDetailIsSet() const;
    void unsetresourceDetail();
    void setResourceDetail(const Object& value);

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 资源名称，没有默认为空字符串
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 标签列表，没有标签默认为空数组
    /// </summary>

    std::vector<ResourceTagResp>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTagResp>& value);


protected:
    Object resourceDetail_;
    bool resourceDetailIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::vector<ResourceTagResp> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ListResourceResp_H_
