
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPredefinedTagResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPredefinedTagResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/TagResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListPredefinedTagResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPredefinedTagResponse();
    virtual ~ListPredefinedTagResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPredefinedTagResponse members

    /// <summary>
    /// 标签集合
    /// </summary>

    std::vector<TagResp>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagResp>& value);


protected:
    std::vector<TagResp> tags_;
    bool tagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPredefinedTagResponse_H_
