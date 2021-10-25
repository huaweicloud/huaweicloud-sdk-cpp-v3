
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ResourceParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ResourceParams_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/sdrs/v1/model/ResourceTag.h>
#include <huaweicloud/sdrs/v1/model/ShowProtectedInstanceParams.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 资源参数数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ResourceParams
    : public ModelBase
{
public:
    ResourceParams();
    virtual ~ResourceParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResourceParams members

    /// <summary>
    /// 保护实例ID。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ShowProtectedInstanceParams getResourceDetail() const;
    bool resourceDetailIsSet() const;
    void unsetresourceDetail();
    void setResourceDetail(const ShowProtectedInstanceParams& value);

    /// <summary>
    /// 标签列表，没有标签默认为空数组。
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);

    /// <summary>
    /// 保护实例名称，没有名称时默认为空字符串。
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    ShowProtectedInstanceParams resourceDetail_;
    bool resourceDetailIsSet_;
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ResourceParams_H_
