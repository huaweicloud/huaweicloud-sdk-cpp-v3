
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ReqDeletePredefineTag_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ReqDeletePredefineTag_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/tms/v1/model/PredefineTagRequest.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除预定义标签请求
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  ReqDeletePredefineTag
    : public ModelBase
{
public:
    ReqDeletePredefineTag();
    virtual ~ReqDeletePredefineTag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReqDeletePredefineTag members

    /// <summary>
    /// 操作标识（区分大小写）：delete（删除）
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<PredefineTagRequest>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<PredefineTagRequest>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<PredefineTagRequest> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ReqDeletePredefineTag_H_
