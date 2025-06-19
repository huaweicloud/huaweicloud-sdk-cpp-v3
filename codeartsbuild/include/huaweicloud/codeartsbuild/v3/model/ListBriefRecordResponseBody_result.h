
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListBriefRecordResponseBody_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListBriefRecordResponseBody_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/BriefRecordItems.h>
#include <string>
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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListBriefRecordResponseBody_result
    : public ModelBase
{
public:
    ListBriefRecordResponseBody_result();
    virtual ~ListBriefRecordResponseBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBriefRecordResponseBody_result members

    /// <summary>
    /// 需要查询的项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 简要构建信息列表
    /// </summary>

    std::vector<BriefRecordItems>& getBriefBuildRecordDtos();
    bool briefBuildRecordDtosIsSet() const;
    void unsetbriefBuildRecordDtos();
    void setBriefBuildRecordDtos(const std::vector<BriefRecordItems>& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<BriefRecordItems> briefBuildRecordDtos_;
    bool briefBuildRecordDtosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListBriefRecordResponseBody_result_H_
