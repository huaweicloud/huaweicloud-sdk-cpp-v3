
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRelatedProjectInfo_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRelatedProjectInfo_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/ListRelatedProjectInfo_result_project_info_list.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 项目列表
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListRelatedProjectInfo_result
    : public ModelBase
{
public:
    ListRelatedProjectInfo_result();
    virtual ~ListRelatedProjectInfo_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRelatedProjectInfo_result members

    /// <summary>
    /// 总数
    /// </summary>

    double getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(double value);

    /// <summary>
    /// 项目列表
    /// </summary>

    std::vector<ListRelatedProjectInfo_result_project_info_list>& getProjectInfoList();
    bool projectInfoListIsSet() const;
    void unsetprojectInfoList();
    void setProjectInfoList(const std::vector<ListRelatedProjectInfo_result_project_info_list>& value);


protected:
    double total_;
    bool totalIsSet_;
    std::vector<ListRelatedProjectInfo_result_project_info_list> projectInfoList_;
    bool projectInfoListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRelatedProjectInfo_result_H_
