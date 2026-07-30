
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAutoSearchTrials_items_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAutoSearchTrials_items_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 超参搜索列表。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListAutoSearchTrials_items
    : public ModelBase
{
public:
    ListAutoSearchTrials_items();
    virtual ~ListAutoSearchTrials_items();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAutoSearchTrials_items members

    /// <summary>
    /// 超参搜索所有trial结果的字段信息。
    /// </summary>

    std::vector<std::string>& getHeader();
    bool headerIsSet() const;
    void unsetheader();
    void setHeader(const std::vector<std::string>& value);

    /// <summary>
    /// 超参搜索所有trial结果的每条数据列表。
    /// </summary>

    std::vector<std::vector<std::string>>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<std::vector<std::string>>& value);


protected:
    std::vector<std::string> header_;
    bool headerIsSet_;
    std::vector<std::vector<std::string>> data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAutoSearchTrials_items_H_
