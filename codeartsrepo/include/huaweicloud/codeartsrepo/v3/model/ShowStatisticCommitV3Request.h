
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ShowStatisticCommitV3Request_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ShowStatisticCommitV3Request_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  ShowStatisticCommitV3Request
    : public ModelBase
{
public:
    ShowStatisticCommitV3Request();
    virtual ~ShowStatisticCommitV3Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatisticCommitV3Request members

    /// <summary>
    /// 仓库短id
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// 分支名称
    /// </summary>

    std::string getRefName() const;
    bool refNameIsSet() const;
    void unsetrefName();
    void setRefName(const std::string& value);

    /// <summary>
    /// 起始提交日期,格式为yyyy-MM-dd
    /// </summary>

    std::string getBeginDate() const;
    bool beginDateIsSet() const;
    void unsetbeginDate();
    void setBeginDate(const std::string& value);

    /// <summary>
    /// 终止提交日期,格式为yyyy-MM-dd（begin_date和end_date时间间隔不超过60天）
    /// </summary>

    std::string getEndDate() const;
    bool endDateIsSet() const;
    void unsetendDate();
    void setEndDate(const std::string& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string refName_;
    bool refNameIsSet_;
    std::string beginDate_;
    bool beginDateIsSet_;
    std::string endDate_;
    bool endDateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowStatisticCommitV3Request& dereference_from_shared_ptr(std::shared_ptr<ShowStatisticCommitV3Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ShowStatisticCommitV3Request_H_
