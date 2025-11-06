
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowLastPushEventInRepositoryResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowLastPushEventInRepositoryResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/RepositoryBriefDto.h>
#include <string>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowLastPushEventInRepositoryResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowLastPushEventInRepositoryResponse();
    virtual ~ShowLastPushEventInRepositoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowLastPushEventInRepositoryResponse members

    /// <summary>
    /// **参数解释：** 分支或者tag名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getRef() const;
    bool refIsSet() const;
    void unsetref();
    void setRef(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RepositoryBriefDto getRepository() const;
    bool repositoryIsSet() const;
    void unsetrepository();
    void setRepository(const RepositoryBriefDto& value);


protected:
    std::string ref_;
    bool refIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    RepositoryBriefDto repository_;
    bool repositoryIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowLastPushEventInRepositoryResponse_H_
