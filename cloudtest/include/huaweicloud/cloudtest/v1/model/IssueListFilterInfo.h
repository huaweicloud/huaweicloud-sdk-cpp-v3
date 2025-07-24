
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssueListFilterInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssueListFilterInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/IssueListPiFilterInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 过滤条件
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  IssueListFilterInfo
    : public ModelBase
{
public:
    IssueListFilterInfo();
    virtual ~IssueListFilterInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueListFilterInfo members

    /// <summary>
    /// 迭代id列表
    /// </summary>

    std::vector<std::string>& getIterationIds();
    bool iterationIdsIsSet() const;
    void unsetiterationIds();
    void setIterationIds(const std::vector<std::string>& value);

    /// <summary>
    /// pi过滤条件
    /// </summary>

    std::vector<IssueListPiFilterInfo>& getPiSprints();
    bool piSprintsIsSet() const;
    void unsetpiSprints();
    void setPiSprints(const std::vector<IssueListPiFilterInfo>& value);

    /// <summary>
    /// 需求名
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 模块id
    /// </summary>

    std::string getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetmoduleId();
    void setModuleId(const std::string& value);

    /// <summary>
    /// 需求状态id
    /// </summary>

    std::string getStatusId() const;
    bool statusIdIsSet() const;
    void unsetstatusId();
    void setStatusId(const std::string& value);


protected:
    std::vector<std::string> iterationIds_;
    bool iterationIdsIsSet_;
    std::vector<IssueListPiFilterInfo> piSprints_;
    bool piSprintsIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    std::string moduleId_;
    bool moduleIdIsSet_;
    std::string statusId_;
    bool statusIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssueListFilterInfo_H_
