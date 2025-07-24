
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SearchRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SearchRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  SearchRequest
    : public ModelBase
{
public:
    SearchRequest();
    virtual ~SearchRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchRequest members

    /// <summary>
    /// 过滤类型
    /// </summary>

    std::string getSearchType() const;
    bool searchTypeIsSet() const;
    void unsetsearchType();
    void setSearchType(const std::string& value);

    /// <summary>
    /// 过滤条件
    /// </summary>

    std::string getSearchValue() const;
    bool searchValueIsSet() const;
    void unsetsearchValue();
    void setSearchValue(const std::string& value);


protected:
    std::string searchType_;
    bool searchTypeIsSet_;
    std::string searchValue_;
    bool searchValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SearchRequest_H_
