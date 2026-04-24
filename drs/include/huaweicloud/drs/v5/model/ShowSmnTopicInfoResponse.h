
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowSmnTopicInfoResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowSmnTopicInfoResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/SmnTopicInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowSmnTopicInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSmnTopicInfoResponse();
    virtual ~ShowSmnTopicInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSmnTopicInfoResponse members

    /// <summary>
    /// 主题信息
    /// </summary>

    std::vector<SmnTopicInfo>& getTopics();
    bool topicsIsSet() const;
    void unsettopics();
    void setTopics(const std::vector<SmnTopicInfo>& value);

    /// <summary>
    /// 主题总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<SmnTopicInfo> topics_;
    bool topicsIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowSmnTopicInfoResponse_H_
