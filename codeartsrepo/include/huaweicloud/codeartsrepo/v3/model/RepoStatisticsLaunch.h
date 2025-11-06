
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoStatisticsLaunch_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoStatisticsLaunch_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  RepoStatisticsLaunch
    : public ModelBase
{
public:
    RepoStatisticsLaunch();
    virtual ~RepoStatisticsLaunch();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoStatisticsLaunch members

    /// <summary>
    /// 仓库是否可以统计
    /// </summary>

    bool isCanStatistics() const;
    bool canStatisticsIsSet() const;
    void unsetcanStatistics();
    void setCanStatistics(bool value);

    /// <summary>
    /// sidekiq任务的 id
    /// </summary>

    std::string getJoinId() const;
    bool joinIdIsSet() const;
    void unsetjoinId();
    void setJoinId(const std::string& value);

    /// <summary>
    /// 启动仓库统计返回的信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    bool canStatistics_;
    bool canStatisticsIsSet_;
    std::string joinId_;
    bool joinIdIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoStatisticsLaunch_H_
