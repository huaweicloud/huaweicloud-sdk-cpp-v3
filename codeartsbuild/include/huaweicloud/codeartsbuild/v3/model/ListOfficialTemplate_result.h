
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListOfficialTemplate_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListOfficialTemplate_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/TemplateList.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 返回值
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListOfficialTemplate_result
    : public ModelBase
{
public:
    ListOfficialTemplate_result();
    virtual ~ListOfficialTemplate_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListOfficialTemplate_result members

    /// <summary>
    /// 总数
    /// </summary>

    double getTotalSize() const;
    bool totalSizeIsSet() const;
    void unsettotalSize();
    void setTotalSize(double value);

    /// <summary>
    /// 模版列表
    /// </summary>

    std::vector<TemplateList>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<TemplateList>& value);


protected:
    double totalSize_;
    bool totalSizeIsSet_;
    std::vector<TemplateList> items_;
    bool itemsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListOfficialTemplate_result_H_
