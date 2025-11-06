
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestEvaluationsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestEvaluationsResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v4/model/CustomEvaluationDto.h>
#include <huaweicloud/codeartsrepo/v4/model/MergeRequestBaseEvaluationDto.h>
#include <vector>
#include <huaweicloud/codeartsrepo/v4/model/UserBasicDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListMergeRequestEvaluationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListMergeRequestEvaluationsResponse();
    virtual ~ListMergeRequestEvaluationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMergeRequestEvaluationsResponse members

    /// <summary>
    /// **参数解释：** 评价id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求id。
    /// </summary>

    int32_t getMergeRequestId() const;
    bool mergeRequestIdIsSet() const;
    void unsetmergeRequestId();
    void setMergeRequestId(int32_t value);

    /// <summary>
    /// **参数解释：** 分数。
    /// </summary>

    int32_t getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(int32_t value);

    /// <summary>
    /// **参数解释：** 创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 评价文本内容。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const UserBasicDto& value);

    /// <summary>
    /// 自定义评价
    /// </summary>

    std::vector<CustomEvaluationDto>& getCustomEvaluations();
    bool customEvaluationsIsSet() const;
    void unsetcustomEvaluations();
    void setCustomEvaluations(const std::vector<CustomEvaluationDto>& value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t mergeRequestId_;
    bool mergeRequestIdIsSet_;
    int32_t level_;
    bool levelIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string content_;
    bool contentIsSet_;
    UserBasicDto user_;
    bool userIsSet_;
    std::vector<CustomEvaluationDto> customEvaluations_;
    bool customEvaluationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestEvaluationsResponse_H_
