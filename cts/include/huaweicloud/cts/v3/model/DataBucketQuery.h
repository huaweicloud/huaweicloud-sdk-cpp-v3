
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_DataBucketQuery_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_DataBucketQuery_H_

#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 追踪桶信息。
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  DataBucketQuery
    : public ModelBase
{
public:
    DataBucketQuery();
    virtual ~DataBucketQuery();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DataBucketQuery members

    /// <summary>
    /// 标识OBS桶名称。由数字或字母开头，支持小写字母、数字、“-”、“.”，长度为3～63个字符。
    /// </summary>

    std::string getDataBucketName() const;
    bool dataBucketNameIsSet() const;
    void unsetdataBucketName();
    void setDataBucketName(const std::string& value);

    /// <summary>
    /// 追踪桶日志是否支持搜索。
    /// </summary>

    bool isSearchEnabled() const;
    bool searchEnabledIsSet() const;
    void unsetsearchEnabled();
    void setSearchEnabled(bool value);

    /// <summary>
    /// 数据类追踪器追踪对象的桶名。 - 当启用或者停用数据类追踪器时，该参数为必选。 - 管理类追踪器无此参数。 - 追踪器一旦创建追踪桶无法修改。
    /// </summary>

    std::vector<std::string>& getDataEvent();
    bool dataEventIsSet() const;
    void unsetdataEvent();
    void setDataEvent(const std::vector<std::string>& value);


protected:
    std::string dataBucketName_;
    bool dataBucketNameIsSet_;
    bool searchEnabled_;
    bool searchEnabledIsSet_;
    std::vector<std::string> dataEvent_;
    bool dataEventIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_DataBucketQuery_H_
