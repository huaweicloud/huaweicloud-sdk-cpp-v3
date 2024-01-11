
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchAddTagReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchAddTagReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/BatchResourceTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量添加资源标签
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  BatchAddTagReq
    : public ModelBase
{
public:
    BatchAddTagReq();
    virtual ~BatchAddTagReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAddTagReq members

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<BatchResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<BatchResourceTag>& value);


protected:
    std::vector<BatchResourceTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchAddTagReq_H_
