
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_BatchAddOrDeleteTagsRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_BatchAddOrDeleteTagsRequestBody_H_


#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/ims/v2/model/ResourceTag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 镜像标签请求体
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  BatchAddOrDeleteTagsRequestBody
    : public ModelBase
{
public:
    BatchAddOrDeleteTagsRequestBody();
    virtual ~BatchAddOrDeleteTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAddOrDeleteTagsRequestBody members

    /// <summary>
    /// 要进行的标签操作，区分大小写。支持create、delete，分别用于批量地创建/更新、删除标签。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 需要增加、修改或者删除的标签键值对集合。
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_BatchAddOrDeleteTagsRequestBody_H_
