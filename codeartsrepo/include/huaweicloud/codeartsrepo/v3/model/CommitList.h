
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CommitList_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CommitList_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/Commit.h>
#include <vector>

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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  CommitList
    : public ModelBase
{
public:
    CommitList();
    virtual ~CommitList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommitList members

    /// <summary>
    /// 提交列表
    /// </summary>

    std::vector<Commit>& getCommits();
    bool commitsIsSet() const;
    void unsetcommits();
    void setCommits(const std::vector<Commit>& value);

    /// <summary>
    /// 提交总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<Commit> commits_;
    bool commitsIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CommitList_H_
