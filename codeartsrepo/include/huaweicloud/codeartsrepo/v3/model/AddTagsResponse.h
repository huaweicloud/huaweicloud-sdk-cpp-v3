
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_AddTagsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_AddTagsResponse_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v3/model/CommitRepoV2.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  AddTagsResponse
    : public ModelBase
{
public:
    AddTagsResponse();
    virtual ~AddTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddTagsResponse members

    /// <summary>
    /// 标签名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 备注
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CommitRepoV2 getCommit() const;
    bool commitIsSet() const;
    void unsetcommit();
    void setCommit(const CommitRepoV2& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string message_;
    bool messageIsSet_;
    CommitRepoV2 commit_;
    bool commitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_AddTagsResponse_H_
