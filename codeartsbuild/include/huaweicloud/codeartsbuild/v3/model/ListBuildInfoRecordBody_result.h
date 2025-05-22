
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListBuildInfoRecordBody_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListBuildInfoRecordBody_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsbuild/v3/model/BuildInfoRecord.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListBuildInfoRecordBody_result
    : public ModelBase
{
public:
    ListBuildInfoRecordBody_result();
    virtual ~ListBuildInfoRecordBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBuildInfoRecordBody_result members

    /// <summary>
    /// 健康度
    /// </summary>

    std::string getHealthScore() const;
    bool healthScoreIsSet() const;
    void unsethealthScore();
    void setHealthScore(const std::string& value);

    /// <summary>
    /// 分页页数
    /// </summary>

    std::string getPageIndex() const;
    bool pageIndexIsSet() const;
    void unsetpageIndex();
    void setPageIndex(const std::string& value);

    /// <summary>
    /// 总页数
    /// </summary>

    std::string getTotalPage() const;
    bool totalPageIsSet() const;
    void unsettotalPage();
    void setTotalPage(const std::string& value);

    /// <summary>
    /// 总条数
    /// </summary>

    std::string getTotalRecord() const;
    bool totalRecordIsSet() const;
    void unsettotalRecord();
    void setTotalRecord(const std::string& value);

    /// <summary>
    /// 构建历史详情列表
    /// </summary>

    std::vector<BuildInfoRecord>& getJobBuildStates();
    bool jobBuildStatesIsSet() const;
    void unsetjobBuildStates();
    void setJobBuildStates(const std::vector<BuildInfoRecord>& value);


protected:
    std::string healthScore_;
    bool healthScoreIsSet_;
    std::string pageIndex_;
    bool pageIndexIsSet_;
    std::string totalPage_;
    bool totalPageIsSet_;
    std::string totalRecord_;
    bool totalRecordIsSet_;
    std::vector<BuildInfoRecord> jobBuildStates_;
    bool jobBuildStatesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListBuildInfoRecordBody_result_H_
